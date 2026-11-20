# BW Risk Assessment

**Report date: 2026-11-20 (Friday), ~09:42 ET** (14:42 UTC; verified via `TZ=America/New_York date` and live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861, regular session). Persona file re-read fresh this run — unchanged since last cycle. Third BW read of this book (prior: 11/19 ~09:41 and ~13:42 ET); the trader's desk has run two further checks since (08:37, 09:37 ET) with zero trades and zero fired mechanical triggers, extending a 30-run no-trade streak.

## Overall Portfolio Risk Grade: **D** (held — one trigger from F)

## Single biggest risk right now

**The book has zero hedge against a single correlated macro factor — "AI/mega-cap tech sentiment" — that today drives both its largest loser (NVDA, direct) and a meaningful slice of its largest position (VTI's cap-weighted tech tilt), while its only genuine winner (GEHC) is simultaneously sitting 0.98pp from a forced trim.** Direct NVDA is "only" 7.50% of pool, but add VTI's mega-cap/tech look-through (≈27.90% of pool × a ~30-33% Big Tech weight ≈ 8.9pp) and the book's true exposure to one macro narrative is closer to **16.4% of pool — more than double the headline number**, with no offsetting short, put, inverse ETF, or defensive sleeve anywhere in the account. That concentration is compounding in real time: NVDA is down **-30.8%** unrealized against an unresolved CEO-succession overhang, and today's premarket/regular-session action (-4.5% vs. yesterday's close) is pure continuation, not a new fact. This is the same structural gap this desk flagged 11/19 — it has not been addressed, and the pool is now at a fresh all-time-low drawdown.

---

## Portfolio snapshot (ground truth, this run)

`get_portfolio`: total_value **$96.15** = cash $56.10 + equity $40.05. Trading pool (= total − $50 off-limits reserve, per Jash's 2026-07-10 capital rule) = **$46.15**, a **-$3.85 / -7.70% accumulated loss** against the $50 base — a new all-time-low mark-to-market, deeper than yesterday's close.

| Symbol | Qty | Avg Cost | Last Px | Mkt Value | % of Equity | % of Pool | Unrealized P&L |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $139.46 | $3.46 | 8.65% | 7.50% | **-30.8%** |
| VTI | 0.036690 | $370.40 | $350.99 | $12.88 | 32.15% | 27.90% | -5.2% |
| VXUS | 0.154525 | $84.13 | $77.00 | $11.90 | 29.71% | 25.78% | -8.5% |
| OMCL | 0.106405 | $46.99 | $33.24 | $3.54 | 8.83% | 7.66% | **-29.3%** |
| XLE | 0.086775 | $57.62 | $60.78 | $5.27 | 13.17% | 11.43% | +5.5% |
| GEHC | 0.036393 | $68.69 | $82.71 | $3.01 | 7.51% | 6.52% | **+20.4%** |
| Cash (deployable) | — | — | — | $6.10 | — | 13.22% | — |

Two of six holdings (NVDA, OMCL) are each down roughly -30%, with zero stop-loss on either. GEHC, the sole clean winner (+20.4%), is 2.52pp over BR's 4%-of-pool policy target and just 0.98pp from the formal 7.5%/+3.5pp drift-trim trigger — the closest any mechanical gate in this book has ever come to firing.

---

## Heat map summary

| Holding / Factor | % of Pool | Single-Name Risk | Correlation Risk | Rate Sensitivity | Recession Stress Est. | Liquidity | Policy Drift |
|---|---|---|---|---|---|---|---|
| **NVDA** | 7.50% | 🔴 Critical | 🔴 Critical (AI/tech factor + duplicated inside VTI) | 🔴 High (long-duration growth DCF) | 🔴 High (-35% to -45% further) | 🟢 Low (tight spread) | 🟢 In-band |
| **VTI** | 27.90% | 🟢 Low (diversified) | 🟠 High (cap-weighted Big Tech tilt) | 🟡 Medium | 🟡 Medium (-25% to -30%) | 🟢 Low | 🟢 In-band |
| **VXUS** | 25.78% | 🟢 Low (diversified) | 🟡 Medium | 🟡 Medium | 🟡 Medium (-25% to -30%, +FX) | 🟢 Low | 🟢 In-band |
| **OMCL** | 7.66% | 🔴 High (-29.3%, repeated bear-floor breach) | 🟢 Low (idiosyncratic) | 🟢 Low | 🟡 Medium (-15% to -20%) | 🟠 Medium (spread widened intraday) | 🟢 In-band |
| **XLE** | 11.43% | 🟡 Medium | 🟢 Low (uncorrelated to tech drawdown) | 🟢 Low | 🔴 High (wide range, demand-destruction risk) | 🟢 Low | 🟢 In-band |
| **GEHC** | 6.52% | 🟡 Medium-High (best performer, most overextended) | 🟢 Low | 🟢 Low | 🟢 Low (-15% to -20%) | 🟢 Low | 🔴 Critical (0.98pp to trigger) |
| **Cash** | 13.22% | — | — | — | — | — | — |
| **Portfolio: AI/tech look-through** | ~16.4% | — | 🔴 Critical — **zero hedge** | — | — | — | — |

---

## Correlation analysis between holdings

The book reads as diversified on a label basis (tech, two broad baskets, healthcare IT, energy, medtech) but is less diversified than it looks once look-through is applied. **VTI is not an independent diversifier from NVDA** — it is cap-weighted toward the same mega-cap/semis complex, so NVDA's governance-driven slide and VTI's -5.2% drawdown are not two independent data points, they are one risk factor expressed twice. VXUS adds a second, genuinely distinct factor (non-US equities, unhedged FX) but even VXUS carries its own semis/tech names (TSMC, ASML, Samsung-adjacent suppliers) that correlate partially with the same AI-capex narrative. XLE is this book's best true diversifier today — energy has negative-to-low correlation with the tech drawdown and is the second-best performer in the book (+5.5%). OMCL and GEHC are both "healthcare," but different sub-sectors (healthcare IT/pharmacy automation vs. medtech equipment) with different drivers (OMCL: hospital IT capex, EHR integration, contract renewals; GEHC: imaging/diagnostics capex, FX from international sales) — genuinely low correlation to each other and to the tech sleeve, which is the one place this book's diversification claim actually holds up.

## Sector concentration

- **Technology/Semiconductors (direct):** 7.50% of pool (NVDA)
- **Technology look-through via VTI's Big Tech tilt:** ≈8.9pp additional → **~16.4% of pool in one correlated AI/tech factor**
- **Diversified core (VTI + VXUS):** 53.68% of pool
- **Healthcare (OMCL + GEHC, two distinct sub-sectors):** 14.19% of pool
- **Energy (XLE):** 11.43% of pool
- **Cash:** 13.22% of pool

No single GICS sector other than the tech look-through exceeds ~16% — on paper this looks adequately spread. The problem is concentration of *narrative*, not of ticker: AI-capex sentiment, rate expectations on long-duration growth cash flows, and the NVDA governance overhang all point the same direction at the same time, and that direction has been down for three straight weeks.

## Geographic exposure and currency risk

Roughly **74% of pool sits in US-domiciled securities** (NVDA, VTI, OMCL, XLE, GEHC); only **VXUS (25.78% of pool)** provides genuine non-US exposure, and it is unhedged — a strengthening dollar is a direct headwind to VXUS returns independent of underlying foreign-equity performance, compounding rather than offsetting any US-led drawdown in a risk-off tape (as seen repeatedly this month, where VTI and VXUS have moved in the same direction on the same days). NVDA, XLE, and GEHC all have material non-US revenue exposure (China export-policy risk for NVDA specifically remains a live, named disqualifier in the trader's own contingency plan) without the book holding any instrument that benefits from a US-dollar move or an easing of that geopolitical risk.

## Interest rate sensitivity

The Fed held its target range at **3.75%–4.00%** at the October 28 meeting, and current market-implied odds for the December 9-10 meeting lean toward **no cut** (Kalshi pricing shows cut odds in the low single digits). A "higher for longer" regime is a direct, ongoing headwind to the book's longest-duration cash-flow story: **NVDA's DCF is the single most rate-sensitive position in the book** — a sustained higher discount rate compresses its valuation mechanically, separate from and in addition to the governance overhang, which is one reason MS's "undervalued" flip this week should be read cautiously (it is priced off the *stock's* decline, not off any improvement in the rate backdrop). VTI carries moderate growth/duration sensitivity via its tech tilt; VXUS adds a second-order rate-sensitivity channel through relative central-bank policy and FX. OMCL and GEHC are comparatively rate-insensitive (healthcare capex cycles respond more to hospital budgets than to the discount rate). XLE is the least rate-sensitive holding — energy cash flows are near-dated and this functions as a partial natural hedge against the "higher for longer" drag on the rest of the book, by accident rather than by design.

## Recession stress test (estimated further drawdown from current marks)

Using Moody's/Zandi's ~40% 12-month recession-probability estimate as the working base case (median forecaster consensus clusters 15-24%, Kalshi-implied is lower, so 40% is a conservative/stress-case input, not a central forecast) and historical sector betas in prior downturns:

| Holding | Est. further drawdown in a confirmed recession | Rationale |
|---|---|---|
| NVDA | -35% to -45% | Semis are the highest-beta cyclical sleeve; an AI-capex pullback (actively being discussed in financial press this week) would hit Data Center revenue directly, on top of the existing governance discount |
| VTI | -25% to -30% | Broad market; 2008 (-55%), 2020 (-34%) bracket a plausible range, tempered to a moderate-recession case |
| VXUS | -25% to -30% | Correlates with and can exceed US drawdowns in global recessions; FX adds variance either direction |
| OMCL | -15% to -20% | More defensive IT-spend profile, but a weak book-to-bill or hospital-capex freeze is a real risk |
| XLE | -25% to -40% (widest range) | Demand destruction can be severe (WTI went negative in 2020); partially offset by a standing geopolitical risk premium |
| GEHC | -15% to -20% | Medtech/diagnostics capex is comparatively sticky, but international (China) exposure is a wildcard |

Blended at current pool weights, a confirmed-recession scenario plausibly takes the pool to roughly **-30% to -38% cumulative loss from the $50 base** (i.e., the $46.15 pool falling toward the low-$30s) before any rebound — this is a stress estimate, not a point forecast, but it is the first time this desk has run the full exercise with every position carrying a live, non-trivial further-downside case.

## Liquidity risk by holding

All six holdings are exchange-listed, fractional-share-eligible securities with no practical execution-liquidity constraint at this book's size. Relative ranking: NVDA, VTI, VXUS, XLE all showed sub-0.05% bid/ask spreads this run (tight, liquid). **GEHC showed a ~0.23% spread** (still tight in absolute terms). **OMCL showed a ~2.9% spread this run (bid $32.76 / ask $33.73)** — the widest in the book by an order of magnitude; this may be a transient, volatile-tape artifact rather than a durable liquidity deterioration, but it is worth flagging precisely because OMCL is also the position most likely to need an exit decision if its bear-floor breach ever does convert into a real trim.

## Single stock risk and position sizing

In a ~$46 pool every position is inherently a fractional-share, small-dollar holding — the real sizing risk here is concentration percentage, not execution risk. The core sleeve (VTI + VXUS, 53.68% of pool) is appropriately the largest and lowest-idiosyncratic-risk allocation. The two positions carrying realized, compounding single-name risk are **NVDA (7.50% of pool, -30.8%, unresolved CEO-succession overhang, no stop-loss)** and **OMCL (7.66% of pool, -29.3%, repeated bear-floor breaches, no stop-loss)** — both are down roughly a third with the trader's discipline correctly refusing to trim on price alone, but that discipline has never yet been tested by an actual structural break, meaning the book currently has no mechanical check against either position continuing to bleed. **GEHC (6.52% of pool vs. a 4% policy target) is this book's sizing irony**: its only clean winner is also its most overextended position relative to stated policy, 0.98pp from a formal trim trigger.

## Tail risk scenarios

| Scenario | Rough probability | Severity if it hits |
|---|---|---|
| NVDA governance story worsens materially (a confirmed national-security finding, further C-suite departures) | Low-moderate (~10-15%) | Extreme — this name has already shown -8% to -13% single-session moves on headlines alone, with zero hedge |
| OMCL's bear floor gets formally lowered *and* a genuine structural deterioration is later found (not just a price level) | Moderate (~20-25%) | High — no stop-loss exists; MS's own fresh read this week actually found the cash-flow story improved, so the near-term risk is a floor get-lifted, not abandoned, but the asymmetry (no mechanical check if MS is wrong) remains |
| Correlated broad risk-off / "AI capex pullback" narrative hits NVDA + VTI + XLE simultaneously | Moderate-high (financial press is actively running this narrative as of 11/18) | High — this is precisely the uncredited ~16.4%-of-pool correlated exposure named above, with no offsetting instrument anywhere in the account |
| GEHC's drift-trim trigger fires into a broad risk-off tape, forcing the book to de-risk its only winner at a bad moment | Near-certain (0.98pp buffer) | Low-moderate — mechanically manageable, but worth flagging that this book's only enforced trim discipline currently applies to its best, not its worst, position |

## Hedging strategies (equities-only toolbox — no options available)

Addressing the top three risks above without options or shorting:

1. **AI/tech correlated concentration (biggest risk):** do not add to NVDA or VTI with any future deployable cash (consistent with the standing rule 6a pause/rule 20 no-new-cash-to-NVDA instruction); if a GEHC trim frees cash, route it to XLE or straight to the cash buffer rather than back into VTI/VXUS, both of which carry the same correlated tech beta.
2. **OMCL single-name risk with no stop-loss:** either (a) diversify the healthcare-IT exposure by adding a small broad healthcare-sector ETF (e.g., XLV) alongside OMCL rather than instead of it, spreading out the company-specific contract/book-to-bill risk while keeping sector exposure, or (b) formalize an explicit hard price-based stop-loss for OMCL specifically — the one instrument missing from this book's otherwise well-designed structural-break framework.
3. **Zero portfolio-level recession/risk-off hedge:** the book has no defensive/low-beta sleeve at all — XLE is cyclical-volatile, not defensive. Consider a small allocation to a genuinely low-beta sector (utilities or consumer staples) funded from the next VTI/VXUS over-target trim, purely to lower blended portfolio beta ahead of a recession scenario that multiple independent forecasters now place at 15-40%.

## Rebalancing suggestions

| Position | Current (% of pool) | Suggested | Rationale |
|---|---|---|---|
| NVDA | 7.50% | Hold; no add (standing pause) | Already blocked from new cash; a trim is available tool if a fresh structural break fires |
| VTI | 27.90% | Hold | In-band vs. policy; still the correlated-tech look-through source, don't add |
| VXUS | 25.78% | Hold | In-band; the book's only real geographic diversifier |
| OMCL | 7.66% | Hold; no add | At policy; add a stop-loss or sector-diversifying ETF per hedging note above |
| XLE | 11.43% | Hold, or preferred add target if cash ever deploys | Best current diversifier and best current performer besides GEHC |
| GEHC | 6.52% (vs. 4% target) | **Trim ~2.5pp toward target proactively**, rather than waiting for the 7.5% mechanical line | It is 0.98pp from firing anyway; locking in gains on the book's one clean winner ahead of a stress scenario, rather than exactly at the trigger, is the more risk-disciplined sequencing given the recession/AI-capex backdrop above |
| Cash | 13.22% | Let float higher; do not rush to redeploy | Tail-risk backdrop argues for dry powder over full deployment while zero hedges exist |

---

*Radical transparency note: this desk is not recommending panic-selling anything — NVDA and OMCL's own contingency plans remain correctly structural-break-gated, and nothing in this report fires either. But "no structural break yet" is not the same as "no risk," and a book carrying ~16.4% correlated AI/tech exposure, two -30% unhedged single-name positions, and zero defensive instruments of any kind should not be graded higher than a D while that remains true.*
