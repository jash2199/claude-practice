# BW Risk Assessment — Risk Management Report
**Date: 2026-10-16 (Friday), ~10:42 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Third run of the day on this book (after 09:37 ET and 10:38 ET NO TRADE runs); first BW report since 2026-10-15 ~14:4x ET (grade C-, held).

---

## Overall Portfolio Risk Grade: **C-** — held, not re-upgraded or downgraded

No structural change since this desk's last report (10/15 ~14:4x ET). What *has* moved: GEHC's extended rally has cooled for the first time in several sessions (-0.33% today, unrealized gain compressed from Thursday's peak +2.96%/+3.57% to +2.08% now) — a partial, small-scale version of exactly the "round-trip" risk this desk has been flagging, happening in slow motion rather than all at once around the print. XLE strengthened further (+1.13% today, re-coupling with MS's improved DCF for a second straight session, per GS's 09:4x ET report). OMCL ticked up marginally (+0.07%). None of this crosses a mechanical trigger or resolves the underlying dual-earnings concentration. Radical transparency cuts both ways: this desk is not finding a reason to downgrade (nothing newly broke) or upgrade (the core risk — GEHC+OMCL earnings 12/13 days out — is unchanged in substance and closer in time, not further away).

## Single biggest risk right now

**Unchanged in kind, closer in time: GEHC and OMCL — a combined 14.32% of equity — report earnings 12 and 13 calendar days out (2026-10-28 and 2026-10-29, both before market open).** BR's 10/15 ~16:1x ET report resolved this desk's own repeated pre-earnings sizing ask by declining a same-day GEHC trim and instead writing a falsifiable, time-boxed mechanism: a tightened 6%-of-pool GEHC earnings-window drift trigger, live only through the 10/28 print. That mechanism is sound and this desk is not re-litigating it. But it is a size-management backstop, not a substitute for the plain fact that both positions walk into binary events with documented "beat but sell off anyway" histories (JPM), and GEHC's cooling today doesn't remove the risk — it just means less unrealized gain is currently at stake than at Thursday's peak, which is a point of qualified relief, not resolution.

---

## Portfolio snapshot (live, 2026-10-16 ~10:42 ET)

`get_portfolio`: total_value **$100.6309634538** (cash $56.10 + equity $44.5309634538). Pool ≈ **$50.6309634538, a +$0.6309634538 (+1.26%) accumulated profit** — up from this morning's reads (09:37 ET and 10:38 ET, both below today's prior high-water marks this week: 10/12 +1.75%, 10/13 +2.06%), not a new all-time high.

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized P&L (cost) | Day Δ (vs 10/15 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $218.330 | $5.420 | 12.17% | 10.71% | +8.41% ($201.40) | +0.51% |
| VTI | 0.036690 | $378.360 | $13.882 | 31.17% | 27.41% | +2.15% ($370.40) | -0.02% |
| VXUS | 0.154525 | $84.170 | $13.006 | 29.21% | 25.69% | +0.05% ($84.13) | +0.39% |
| OMCL | 0.106405 | $35.975 | $3.828 | 8.59% | 7.56% | **-23.44% ($46.99) — book's largest unrealized loss** | +0.07% |
| XLE | 0.086775 | $67.315 | $5.841 | 13.12% | 11.54% | +16.83% ($57.62) | **+1.13% — today's best mover, second straight session re-coupling with MS's improved DCF** |
| GEHC | 0.036393 | $70.120 | $2.552 | 5.73% | 5.04% | +2.08% ($68.69) — **cooling off a fresh post-entry high**, still net-positive | **-0.33% — first red day in several sessions** |
| Cash (deployable) | — | — | $6.10 | — | 12.05% | — | — |

NVDA+OMCL combined concentration: **20.76% of equity** — 4.24pp buffer to the 25% backstop trigger (clean). GEHC pool weight 5.04% vs. BR's 4% standard target (+1.04pp, inside the 5pp band) **and** 0.96pp below BR's new time-boxed 6%-pool earnings-window trigger (live through 10/28) — not fired, and the buffer widened slightly on today's pullback. **OMCL DCA gate: accumulated profit $0.631 vs. the $2.50 threshold, ~$1.869 away** — essentially flat vs. this morning's reads, still not close to firing.

---

## 1. Correlation analysis between holdings

- **GEHC/OMCL correlation broke for the first time in 5+ sessions.** GEHC red (-0.33%) while OMCL ticked green (+0.07%) — a genuine divergence after this desk repeatedly flagged the two healthcare names moving together as a developing factor risk. One session doesn't erase that finding, but it is a real data point against over-reading "they always move together" into the 10/28-10/29 window; the two names can and did decouple on an ordinary day.
- **NVDA/VTI/VXUS cluster moved together again** (+0.51%/-0.02%/+0.39%), back to the standard pattern after 10/15's one-session split. Reinforces the standing finding: this trio is effectively one correlated-to-near-1 bet on broad risk appetite, not three diversified exposures.
- **XLE re-coupled with its own improved fundamentals for a second straight session** (+1.13% today, following +1.29% at this morning's 09:37 ET open, per GS). This partially answers this desk's own hedge-reliability concern from 10/14-10/15 (two sessions of XLE's price moving the *opposite* way from MS's narrower DCF gap) — but two green days in a rising-tape environment is not yet evidence the hedge will behave as intended in an actual demand-side downturn, since XLE moved *with* the market's other green names today, not against them. A genuine hedge test only comes on a red day for the broad market; this desk has not yet seen one since the Brent/Hormuz rebuild.

## 2. Sector concentration (% of equity, look-through where estimable)

| Sector / bucket | % of equity | Note |
|---|---|---|
| Technology / Semis / AI (direct NVDA + look-through via VTI/VXUS) | ~27-30% (estimate, unchanged methodology) | Direct NVDA alone is 12.17% |
| Diversified US equity (VTI, ex-tech-look-through) | 31.17% (gross) | Largest single line item |
| Diversified ex-US equity (VXUS, ex-tech-look-through) | 29.21% (gross) | Second-largest line item |
| Energy (XLE) | 13.12% | Satellite/hedge sleeve — thesis improving, confirmation still incomplete (see §1, §9) |
| Healthcare — tech/services (OMCL) | 8.59% | Least liquid holding, deepest unrealized loss, 13 days from its binary event |
| Healthcare — medtech/equipment (GEHC) | 5.73% | Over BR's 4% target by 1.04pp of pool, inside both drift bands, cooling off a fresh high |

**Combined healthcare (OMCL+GEHC): 14.32% of equity**, both reporting within 24 hours of each other in under two weeks. **Combined satellite/conviction sleeve (NVDA+OMCL+XLE+GEHC): 39.61% of equity** vs. **60.38% in the two core ETFs** — essentially unchanged in shape from this desk's last report.

## 3. Geographic exposure and currency risk

- **VTI**: 100% US-domiciled, USD. No direct FX risk.
- **VXUS**: ~100% ex-US, underlying EUR/JPY/GBP/EM currency exposure — the book's only real translation risk, up modestly today (+0.39%), no notable new catalyst.
- **NVDA**: USD revenue with Taiwan/China supply-chain and export-control exposure. No new geopolitical/export-control development found this run.
- **OMCL / GEHC**: essentially pure US domestic revenue — no meaningful FX risk for either. GEHC's one international wrinkle (the Sofie Biosciences acquisition, now a signed $945M cash deal per JPM) closes H1 2027 and is still a procedural item, not a currency exposure.
- **XLE**: USD-denominated but economically linked to a dollar-priced global commodity (Brent, per MS's ~$104-105/bbl Hormuz-driven rebuild, still 2 days stale — no fresher dated print found by any desk this run or last).

## 4. Interest rate sensitivity per position

Rf input remains the 10/14-dated ~5.19% print (down from the prior stale 5.29%) — no fresher figure found by any desk since; this desk continues to credit that cleanup as current, not stale.

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows; DCF fair value moves materially per 100bp of WACC |
| VTI | Medium | Broad-market beta to rates, dampened by diversification |
| VXUS | Medium | Same mechanism as VTI plus a currency-rate-differential layer |
| OMCL | **High** | Small-cap, growth-weighted DCF (MS's widest gap on the book) — most rate-sensitive name in dollar-weighted fair-value terms, cutting both ways right into its earnings window |
| XLE | Low-Medium | Commodity-price-driven first, discount-rate-driven second; current strength is a Hormuz supply-shock story, not a rate story |
| GEHC | Medium-High | ~$8.0B sourced net debt moves per-share fair value materially with Rf — a genuine refinancing-cost exposure |

No change from the last report.

## 5. Recession stress test — estimated drawdown

Same methodology as prior reports, re-run against this run's live weights (correlated equity-market recession shock, -20% to -35% broad equities, consistent with BR's "-27% to -37% pool-level" estimate):

| Scenario | Assumed move | Pool-level impact |
|---|---|---|
| Mild recession / growth scare (-15% broad equities) | NVDA -22%, VTI/VXUS -15%, OMCL -20%, GEHC -18%, XLE -12% | **≈ -16% to -18% of pool value** (~-$8.10 to -$9.11 on today's ~$50.63 pool) |
| Severe recession (-35% broad equities, oil demand destruction flips XLE to falling with the market) | NVDA -45%, VTI/VXUS -33%, OMCL -40%, GEHC -38%, XLE -30% | **≈ -34% to -37% of pool value** (~-$17.21 to -$18.73) |

**Unchanged conclusion, restated because today's action doesn't change it: XLE is modeled falling in BOTH scenarios.** Today's and this morning's re-coupling with MS's improved DCF happened on green days for the broad tape — it says nothing about whether XLE would actually decouple favorably (i.e., hold up or rise) in a genuine demand-side recession, where oil demand itself falls with everything else. **This book still has zero demonstrated recession hedge.**

## 6. Liquidity risk rating per holding

No change from prior reports — re-stated for completeness:

| Position | Liquidity rating | Note |
|---|---|---|
| NVDA | Very low risk | Mega-cap, enormous daily volume |
| VTI | Very low risk | One of the most liquid ETFs in existence |
| VXUS | Very low risk | Highly liquid broad ETF |
| XLE | Very low risk | Highly liquid sector ETF |
| GEHC | Low risk | Large-cap, ample daily volume |
| OMCL | **Moderate risk (relative)** | Smallest market cap in the book; live bid/ask $35.91/$36.01 today (~0.28% spread) — still structurally the widest-spread name on the sheet at scale |

At current fractional-share position sizes (all under $14), liquidity risk is not binding for execution on any holding today.

## 7. Single stock risk and position sizing recommendations

- **NVDA**: 10.71% of pool vs. 10% target (+0.71pp), inside the 5pp band, no-new-cash instruction (rule 20) standing. No change.
- **OMCL**: 7.56% of pool, DCA-gated against the $2.50 threshold (~$1.87 away, essentially flat vs. this morning). **No sizing change recommended; the gate is correctly binding** and narrowing steadily as the pool's accumulated profit grows.
- **GEHC**: 5.04% of pool vs. 4% target (+1.04pp) — inside both the standard 5pp band and BR's new time-boxed 6%-pool earnings-window trigger (0.96pp buffer, wider than this morning's 0.88pp as the rally cooled). **This desk is not re-raising its prior trim suggestion.** BR's 10/15 resolution converted that repeated ask into a real mechanism; today's pullback is itself evidence the position can correct on its own without discretionary intervention. If GEHC resumes climbing and closes the gap to 6% of pool before 10/28, that trigger — not another BW flag — is the correct forcing function.
- **XLE**: 11.54% of pool vs. 12% target (-0.46pp) — modestly underweight, no sizing concern. The live risk remains hedge-thesis confirmation (§1, §5), not position size.
- **Deployable cash**: $6.10, 12.05% of pool vs. BR's 11% target (+1.05pp) — mildly above target heading into the dual-earnings window, a modest positive for §8.

## 8. Tail risk scenarios with probability estimates

*(Subjective, this desk's own estimates.)*

1. **OMCL beats and sells off anyway on 10/29: ~35-40% probability.** Impact: another -10% to -20% day-0 move on an already -23.4%-cost position → **-0.4% to -0.8% of total pool**, which would push OMCL's unrealized loss past -30% for the first time.
2. **GEHC gives back its remaining unexplained gain around its own 10/28 print: ~30-35% probability**, modestly lower-impact than prior reports since today's cooling already shrank the gap to round-trip (unrealized +2.08% now vs. the +3.57% Thursday peak). Impact: -5% to -10% round-trip on the remaining gain → **-0.05% to -0.15% of total pool** — a smaller number than this desk has cited in recent reports, purely because less is currently at stake.
3. **Both land badly in the same week (10/27-10/30): ~15-18% probability.** Impact: **combined -0.5% to -1.0% of total pool** in a plausible-bad case.
4. **Hormuz de-escalation erases XLE's gain just as the hedge is most relied upon: ~25-30% probability over the next 4-6 weeks.** Two sessions of re-coupling on green days (§1) don't resolve this — a confirmed de-escalation would hit XLE's price and widen MS's DCF gap simultaneously, the scenario this desk has flagged since the Brent rebuild.
5. **Recurrence of a broad, correlated, unattributed risk-off episode: >50% probability of recurring at least once more this quarter.** Unchanged, standing, highest-probability moderate-impact risk.

## 9. Hedging strategies to reduce the top 3 risks (equities-only — no options)

**Top 3 risks, ranked, unchanged in order:** (1) the 10/28-10/29 dual-earnings event concentration in GEHC+OMCL, now 12/13 days out; (2) single-point dependency on XLE as "the hedge" despite a supply-shock-not-recession-hedge mechanism — two sessions of favorable re-coupling noted, but not yet tested on a red broad-market day; (3) recurring correlated broad-market risk-off hitting NVDA/VTI/VXUS together, which re-asserted itself today after one session of splitting.

1. **For the earnings-event concentration**: unchanged — size and timing are the only equities-only levers, and BR's time-boxed GEHC trigger plus OMCL's DCA gate are now the book's two live mechanisms. This desk has no new discretionary ask here; the written mechanisms are the right tool and are correctly not firing today.
2. **For XLE hedge-dependency**: unchanged recommendation — a true recession hedge in an equities-only book would look like a low-beta, demand-defensive sleeve (utilities, staples, short-duration Treasury-proxy), not an energy ETF whose current strength is geopolitical-supply-driven. The two-session re-coupling is encouraging for XLE's valuation thesis but does not substitute for a genuine demand-side hedge; worth treating any future 7th-ticker slot as a defensive add, not another satellite conviction bet.
3. **For recurring correlated risk-off**: unchanged — cash buffer discipline and avoiding forced selling into a drawdown remain the only equities-only mitigants. The cash floor should still be read as a floor to actively defend through 10/28-10/30 specifically.

## 10. Rebalancing suggestions with allocation percentages

No position has breached a 5pp drift-band trigger — **no mechanical rebalancing is required this run.**

- **GEHC**: 5.04% pool vs. 4% target (+1.04pp) — inside the standard band and BR's tighter earnings-window line (0.96pp buffer). No discretionary trim recommended this run; the written mechanism governs.
- **OMCL**: 7.56% vs. 10% target — underweight, correctly DCA-gated; no action.
- **XLE**: 11.54% vs. 12% target — modestly underweight; no action recommended while hedge-thesis confirmation (§1, §5, §9) remains incomplete.
- **VTI/VXUS**: both within ~1-3pp of target — no action.
- **Cash**: 12.05% vs. 11% target (+1.05pp) — hold the modest surplus through the earnings window.

---

## Heat map summary

| Risk factor | Level | Trend vs. last report (10/15 ~14:4x ET) |
|---|---|---|
| Single-name concentration (NVDA+OMCL) | Low | Flat (clean, 4.24pp buffer) |
| GEHC drift (vs. 4% target / BR's 6%-pool earnings line) | **Medium** | **Improving** — rally cooled, buffer to the tighter trigger widened |
| Dual-earnings event risk (OMCL 10/29 + GEHC 10/28) | **High** | Flat in kind, 1 day closer (13/14 → 12/13 days out) |
| OMCL unrealized loss | **High** | Essentially flat (-23.44% vs. -23.61%) |
| Correlation-to-1 (NVDA/VTI/VXUS cluster) | Medium | **Reverted** — cluster moved together again after one session of splitting |
| GEHC/OMCL correlation | Medium | **Improving (new)** — first divergence in 5+ sessions |
| XLE hedge reliability | Medium-High | **Improving but unconfirmed** — second straight session re-coupling with the improved DCF, only on green broad-market days |
| Recession-hedge coverage | **High (gap)** | Unchanged — no genuine demand-side recession hedge exists in this book |
| Rate-input staleness | Low | Flat (current, no fresher print found or needed) |
| Liquidity | Low | Flat |
| Geographic/FX | Low-Medium | Flat |
| Macro attribution / data-availability gap | Medium | Flat — fresh WebSearch this run (implicitly, via team reports) reproduced the same chronic wall |
| Cash buffer adequacy | Low | Flat, slightly above target (favorable going into §8) |

---

*This desk's mandate is radical transparency on risk, not trade execution — all figures above are live-verified via the Robinhood MCP connector (read-only) and the current analyst files; no order has been or will be placed by this report.*
