# BW Risk Assessment — Risk Management Report
**Date: 2026-10-01 (Thursday), ~14:41 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Second BW report of the day, ~4 hours after the 10:46 ET F-grade downgrade.

---

## Overall Portfolio Risk Grade: **F** — held at F (no upgrade from 10:46 ET)

## Single biggest risk right now
**The structural picture that earned this morning's F grade has not changed, even though the tape has stabilized.** Pool value has round-tripped from this morning's -0.171% back to roughly flat (+0.023%), but that is price noise, not resolution: MS's 10:15 ET WACC rebuild still has GEHC (-2.3%) and XLE (-4.2%) priced *above* this book's own DCF fair value, NVDA's overvaluation gap is still the widest on file (-16.7%), and OMCL remains the only held name with real valuation support (narrowed to +43.5% from +56.9%). Four of six holdings still lack valuation support simultaneously, in a book with no stop-loss and no options hedge. Layered on top: a federal shutdown that appears to have begun today (duration unknown — this country's own prior shutdowns this year ran 43 and 76 days), a 10-year yield still pinned near 5.2-5.3%, and **BR's 10/1 policy re-underwrite (NVDA target revision, XLE top-up close-out) is now ~23+ hours overdue against its own self-committed deadline** — the allocation owner has gone dark through the exact window this book's valuation floor cracked. Radical transparency: a grade shouldn't bounce back to D- just because the tape had a calmer afternoon. Nothing that actually caused the downgrade has been fixed.

---

## Portfolio snapshot (live, 2026-10-01 ~14:41 ET)

`get_portfolio`: total_value **$100.0113** (cash $56.10 + equity $43.9113). Pool ≈ **$50.0113**, a **+$0.0113 (+0.023%) accumulated profit** — essentially flat on the day, a partial recovery from this morning's -0.171% low but still well inside noise. Deployable cash $6.10 (~12.20% of pool).

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized P&L | Day Δ |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $231.93 | $5.76 | 13.12% | 11.52% | **+15.16%** (cost $201.40) | +1.56% |
| VTI | 0.036690 | $375.39 | $13.77 | 31.36% | 27.53% | +1.35% (cost $370.40) | +0.31% |
| VXUS | 0.154525 | $84.36 | $13.04 | 29.69% | 26.06% | +0.27% (cost $84.13) | -0.71% |
| OMCL | 0.106405 | $33.67 | $3.58 | 8.16% | 7.16% | **-28.35%** (cost $46.99) | -1.12% |
| XLE | 0.086775 | $62.50 | $5.42 | 12.35% | 10.85% | +8.47% (cost $57.62) | +1.63% |
| GEHC | 0.036393 | $64.31 | $2.34 | 5.33% | 4.68% | -6.38% (cost $68.69) | -1.62% |
| Cash (deployable) | — | — | $6.10 | — | 12.20% | — | — |

NVDA+OMCL combined concentration: **21.27% of equity** (25% trigger, ~3.73pp buffer — clean). NVDA alone: 11.52% of pool vs. BR's 10% target (+1.52pp over, no 5pp drift trigger). No mechanical trigger fired.

---

## 1. Correlation analysis between holdings

| Pair | Correlation (qualitative) | Driver |
|---|---|---|
| NVDA ↔ VTI | High (+) | VTI's own mega-cap tech weight (~30%+) means NVDA is effectively double-counted exposure, not a true diversifier |
| NVDA ↔ VXUS | Moderate (+) | Ex-US indices carry far less AI/semis weight; genuine but partial diversification |
| NVDA ↔ OMCL | Moderate (+), rising | Both equity-beta, both got hit together on today's broad risk-off tape; OMCL is healthcare-tech, not AI, but correlation has drifted up in multi-factor selloffs (rule 9) |
| NVDA ↔ XLE | Historically Low/negative, **currently decoupled** | Energy vs. growth normally diversify; XLE has instead tracked NVDA's up-days for weeks (rule 9's live-tested hedge-decoupling finding) — the correlation this book is *relying on* for diversification is not the correlation showing up in the tape |
| NVDA ↔ GEHC | Low | Different sector, different rate-sensitivity profile until today's WACC-driven DCF flip, which now links them through discount-rate exposure rather than fundamentals |
| VTI ↔ VXUS | Moderate (+) | Both broad equity baskets; global risk-off/on sentiment dominates, but VXUS's ex-US/value tilt provides real dispersion in regional shocks |
| XLE ↔ GEHC | Low | No structural link; both happen to share today's WACC-driven DCF deterioration, which is a modeling artifact, not a fundamental correlation |

**Takeaway:** this book's diversification is thinner than the position count (6 tickers) suggests. The one pair genuinely expected to hedge each other (NVDA/XLE) is the one currently failing to do so in the live tape.

## 2. Sector concentration risk (% breakdown)

Look-through basis (NVDA direct + VTI/VXUS's own sector weights blended in):

| Sector | Approx. % of equity (look-through) | Note |
|---|---|---|
| Technology / Semis / AI | **~28-29%** | NVDA direct (13.1%) + VTI's own ~30% tech weight + a smaller VXUS tech slice — essentially flat for weeks |
| Healthcare | ~17-18% | GEHC (5.3%) + OMCL (8.2%) + VTI/VXUS's own healthcare weight (~11-13% combined) |
| Energy | ~13-14% | XLE direct (12.3%) + VTI/VXUS's small native energy weight |
| Broad/diversified (unattributed by single sector) | ~40% | The remainder of VTI/VXUS spread across financials, industrials, consumer, etc. |

Tech/AI concentration has sat at ~28-29% of equity for weeks without a fresh catalyst to move it — it is the single largest look-through sector bet in the book, bigger than the 13% headline NVDA number implies.

## 3. Geographic exposure and currency risk

- **US exposure**: NVDA (100% US), VTI (100% US), OMCL (US), XLE (US-domiciled energy majors), GEHC (US-domiciled, but genuinely global revenue — healthcare equipment sold worldwide) → roughly **~85-88% of equity is US-domiciled/listed**.
- **Ex-US exposure**: VXUS alone, ~29.7% of equity — the book's only dedicated non-US sleeve.
- **Currency risk**: all positions are USD-denominated at the ticker level; VXUS's underlying holdings carry real FX translation risk (EUR, JPY, GBP, EM currencies) that does not show up as a separate line item but does flow through VXUS's price. GEHC's global revenue base also carries indirect FX translation risk embedded in its earnings, uncaptured by this book's US-dollar-only view. No direct FX hedge exists anywhere in this book — not a current problem at this size, but worth naming since it's invisible in the quote-level data this desk normally reports.
- **A US-centric shock (the shutdown, a Fed move, a US-specific credit event) hits ~85%+ of this book's equity simultaneously** — geographic diversification is thinner than the VTI/VXUS split suggests once GEHC, OMCL, XLE, and NVDA are all counted as US-domiciled.

## 4. Interest rate sensitivity by position

| Position | Rate sensitivity | Basis |
|---|---|---|
| NVDA | **High** | Long-duration growth name; MS's DCF gap widened from -10.6% to -16.7% on this week's WACC move alone |
| OMCL | **High** | Small/mid-cap growth; DCF upside narrowed from +56.9% to +43.5% on the same WACC move |
| GEHC | **High** | DCF *flipped* from +7.1% undervalued to -2.3% overvalued purely on the discount-rate input — the most rate-sensitive flip on the book this week |
| XLE | **Moderate, model-sensitive** | DCF also flipped (-4.2%) on WACC, but XLE's real-world price action has been *decoupled* from both rates and its own oil thesis for weeks (rule 9) — the DCF sensitivity is real, the live-price sensitivity is unreliable |
| VTI | **Moderate** | Broad index, but its own ~30% tech weight imports real duration risk |
| VXUS | **Lower** | More value/financials-tilted, less duration-sensitive than the US core sleeve |

**Four of six held names now carry a DCF-confirmed negative read-through from this week's rate move.** If the 10yr reverses back under 5%, MS's own framework says GEHC and XLE's flips are the first likely to reverse; NVDA and OMCL's verdicts are more robust either way.

## 5. Recession stress test (estimated drawdown)

Applying BR's own modeled bad-year pool-level scenario (-26% to -33%) with position-level color:

| Position | Stress-case drawdown (illustrative) | Rationale |
|---|---|---|
| NVDA | -40% to -55% | High-beta growth/semis; worst historical drawdowns in a demand-shock recession exceed broad market by 1.5-2x |
| OMCL | -25% to -35% | Small-cap, already -28% from cost; further multiple compression likely, partially offset by healthcare's defensive demand |
| GEHC | -15% to -25% | Healthcare equipment has real defensive characteristics (recurring service revenue), but elevated starting valuation risk from this week's DCF flip adds downside |
| XLE | -20% to -35%, wide range | Energy is genuinely cyclical in a demand-destruction recession, but a supply-shock-driven recession (e.g., a Hormuz closure) could see XLE *rise* even as the rest of the book falls — path-dependent, not a clean hedge |
| VTI | -25% to -35% | Broad US market, in line with historical recession drawdowns |
| VXUS | -20% to -30% | Typically shallower than US in a US-centric recession, deeper in a globally synchronized one |

**Pool-level estimate: -26% to -38%**, wider than BR's own -26%/-33% range once NVDA's idiosyncratic high-beta tail and OMCL's already-impaired starting point are weighted in. At this book's absolute dollar size that is a ~$13-19 drawdown on the current $50 pool — survivable, but worth stating plainly rather than softening.

## 6. Liquidity risk rating

| Position | Liquidity rating | Note |
|---|---|---|
| NVDA | 🟢 Very low risk | Mega-cap, extremely deep market |
| VTI | 🟢 Very low risk | Largest US total-market ETF, continuous deep liquidity |
| VXUS | 🟢 Very low risk | Large international ETF, deep liquidity |
| XLE | 🟢 Very low risk | Large sector ETF, deep liquidity |
| OMCL | 🟡 Low-moderate | Small/mid-cap single name; thinner book than the ETFs, but still NASDAQ-listed with routine daily volume — immaterial at this book's fractional-share size |
| GEHC | 🟡 Low-moderate | Mid-cap single name; same profile as OMCL |

No liquidity concern at this book's position sizes ($2-14 per line) — flagged for completeness, not as an active risk.

## 7. Single stock risk & position sizing recommendations

- **NVDA (11.52% of pool, +1.52pp over BR's 10% target):** the book's single largest idiosyncratic risk by look-through sector weight once combined with VTI's tech exposure. Not a mechanical trigger breach, but sitting over target during the same week its own DCF gap hit a new widest-ever reading is the wrong direction to be drifting. **Recommend BR formally resolve the overdue NVDA-target question this cycle** — this desk has no basis to force a trim unilaterally (rule 19), but the overage should not be allowed to compound silently through a second overdue cycle.
- **OMCL (7.16% of pool, -2.84pp under target, -28.3% unrealized):** sizing is fine — it's under target by design pending the DCA gate. The risk here isn't sizing, it's thesis durability: this is the book's largest unrealized loss and its DCF discount, while still the widest on the book, has now narrowed two reports running (56.9% → 43.5%). Worth a dedicated BW/MS check-in on *why* the discount is narrowing (price recovery vs. fair-value erosion) before the DCA gate fires.
- **GEHC and XLE (4.68% and 10.85% of pool, near target):** sizing is appropriate; the live issue is valuation support, not size. No sizing action implied by this week's DCF flip per this book's own rule 5/16 discipline (a valuation-model artifact alone isn't a trim trigger without a structural break) — already decided HOLD on both, no new reason to revisit that call this report.
- **VTI/VXUS:** both within ~1pp of target; no action.

## 8. Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 2-4 weeks) | Estimated pool impact |
|---|---|---|
| Shutdown extends 2+ weeks, broad risk-off deepens | ~35-45% (shutdown status itself unconfirmed by independent search — see data note below) | -5% to -10% |
| 10yr yield pushes through 5.5%, second WACC rebuild hits NVDA/OMCL further | ~20-30% | -3% to -8%, concentrated in NVDA/OMCL |
| Hormuz escalation to an actual, sustained closure (not just the ongoing skirmishing) | ~10-15% | XLE theoretically +15-25%, but **given the live decoupling already observed, treat this as a coin-flip on direction, not a reliable hedge payoff** |
| AI capex/demand air pocket (a real NVDA-specific guidance cut or hyperscaler capex pullback) | ~10-15% | -15% to -25% on NVDA alone, -5% to -8% pool-level |
| Broad recession confirmation (NBER-style, not just a growth scare) | ~10-15% over 2-4 weeks | -26% to -38% pool-level (see §5) |
| Clean rate reversal (10yr back under 5%), GEHC/XLE DCF flips reverse | ~20-25% | +2% to +4%, concentrated in GEHC/XLE |

## 9. Hedging strategies for the top 3 risks (equities-only — no options)

1. **Tech/AI concentration (NVDA + VTI's own tech weight, ~28-29% look-through):** the only real equities-only lever is reducing new tech exposure and directing fresh deployable cash toward VXUS or the (currently gated) OMCL/GEHC sleeves rather than any further NVDA or VTI top-up. This book already defers that decision to BR per rule 19 — reiterating the recommendation here, not proposing to act on it unilaterally.
2. **Rate-shock sensitivity (GEHC, XLE, OMCL's DCF-confirmed exposure):** no fixed-income sleeve exists in this all-equity mandate (BR's own stated gap), so the only available lever is sizing discipline — don't add to any of the three rate-sensitive names until the WACC rebuild either holds for a full validated period or reverses. Already the de facto posture; formalizing it removes any temptation to average down into GEHC/OMCL on "it's cheaper" grounds alone (rule 18's addendum already declined that logic once).
3. **Hedge-decoupling risk (XLE no longer reliably tracking its own thesis):** since this book cannot short or buy puts, the only equities-only response to a hedge that's failing to hedge is **not relying on it for sizing decisions** — i.e., don't treat XLE's current unrealized gain as portfolio protection when evaluating NVDA/tech risk, and don't grow XLE further specifically *because* "it's the recession hedge" without separately re-underwriting that thesis. This is a logging/discipline fix, not a trade.

## 10. Rebalancing suggestions (allocation %, pool basis)

| Position | Current | BR target (set 9/17) | Drift |
|---|---|---|---|
| VTI | 27.53% | 28% | -0.47pp |
| VXUS | 26.06% | 25% | +1.06pp |
| NVDA | 11.52% | 10% | +1.52pp |
| XLE | 10.85% | 12% | -1.15pp |
| GEHC | 4.68% | 4% | +0.68pp |
| OMCL | 7.16% | 10% | -2.84pp (DCA-gated by design) |
| Cash | 12.20% | 11% | +1.20pp |

No position breaches the 5pp single-position drift trigger — **no rebalance is mechanically required today.** The one figure worth a named ask: NVDA's +1.52pp overage, compounding in the same week its DCF gap hit a new widest-ever reading, while BR's own re-underwrite that was supposed to resolve the NVDA target question sits ~23+ hours overdue. This isn't a new flag (BR's silence is already logged as a process problem for tomorrow's weekly summary per the trader's own notes) — just restating that this desk's risk read and the overdue policy decision are now pointing at the same open question.

---

## Heat Map Summary

| Risk Factor | Level | Trend since 10:46 ET |
|---|---|---|
| Valuation support gone on 4/6 holdings (MS WACC rebuild, GEHC/XLE/NVDA/OMCL all overvalued or narrowing) | 🔴 High | → unchanged — still the core finding |
| Government shutdown (appears begun; duration/confirmation still unverified by independent search) | 🔴 High | → unchanged, still undated |
| Rate shock / WACC level (10yr ~5.2-5.3%) | 🔴 High | → unchanged |
| BR's policy re-underwrite now 23+ hours overdue | 🔴 High | ⬆ worse — a full additional run-cycle has passed with no post |
| Hormuz/Iran tail risk | 🔴 High | → unchanged, still open, not calm |
| XLE hedge-decoupling (price not tracking its own thesis or the WACC move) | 🟡 Moderate | → unchanged |
| Look-through tech/AI concentration (~28-29% of equity) | 🟡 Moderate | → flat |
| NVDA sizing vs. target (+1.52pp over, unresolved) | 🟡 Moderate | ⬆ compounding, unresolved |
| OMCL drawdown (-28.3%) + narrowing DCF discount | 🟡 Moderate | → narrowing discount worth watching, not yet actionable |
| Pool profit level (+0.023%, flat) | 🟢 Low | ⬆ improved from this morning's -0.171%, but noise, not signal |
| Headline concentration triggers (NVDA%, NVDA+OMCL% combined) | 🟢 Low | → clean, 3.73pp buffer to the 25% trigger |
| Liquidity | 🟢 Low | → unchanged |

**Note on data quality (rule 4 discipline):** fresh WebSearch this run on the 10yr close, shutdown status, and Hormuz again returned the same unable-to-independently-confirm-today's-exact-print picture every desk has flagged for days — stale shutdown-odds figures (predicting "45-47% odds" of a shutdown that state.md says has already begun), no clean dated 10/1 Treasury print, and Hormuz results with no clear today-dateline. This report leans on Robinhood-verified live prices and MS's own already-corroborated rate chain rather than a fresh unverified web figure, consistent with every other desk's current practice.

---

Sources:
- [10 Year Treasury Yield Forecast 2026 — betteruptime](https://edge-eu-west-2.betteruptime.com/en/10-year-treasury-yield-forecast-2026.html)
- [10 Year Treasury Rate — YCharts](https://ycharts.com/indicators/10_year_treasury_rate)
- [Oct 1 Shutdown Odds Fall to 46% After Mid-Cycle Stopgap — PredictionHunt](https://www.predictionhunt.com/news/oct-1-shutdown-odds-fall-to-46-after-mid-cycle-jul-30-2026)
- [Oil catch-up: Iran says tanker hit mine in Hormuz; Centcom says drone struck it instead — InvestingLive](https://investinglive.com/commodities/oil-catch-up-iran-says-tanker-hit-mine-in-hormuz-centcom-says-drone-struck-it-instead/)
- [Iran Guards say they halted 3 oil tankers in Hormuz — Arab News](https://www.arabnews.pk/node/2652657/middle-east)
- Internal: trading-experiment/state.md (live Robinhood snapshot and Balance history through 10/1 ~14:36 ET), analysts/ms-dcf-valuation.md (10/1 ~10:15 ET WACC rebuild), analysts/br-portfolio-builder.md (9/30 ~16:13 ET, now stale — re-underwrite still not posted), analysts/gs-stock-screener.md (10/1), analysts/jpm-earnings-analyzer.md (10/1), this desk's own 10/1 ~10:46 ET report (prior version, git history)
