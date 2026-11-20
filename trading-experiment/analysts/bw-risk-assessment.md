# BW Risk Assessment

**Report date: 2026-11-20 (Friday), ~13:48 ET** (18:48 UTC; verified via `TZ=America/New_York date` and live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861, regular session). Persona file re-read fresh this run — unchanged since last cycle. Second BW read of the day (prior: ~09:42 ET, grade D). The trader's desk has run at least five further checks since (08:37 through 12:37 ET), all NO TRADE, extending the no-trade streak past 33 consecutive runs — the pool has set a fresh all-time mark-to-market low on almost every one of them.

## Overall Portfolio Risk Grade: **D** (held — one trigger from F)

## Single biggest risk right now

**The book just printed its deepest-ever drawdown, on the same uncredited risk factor this desk named this morning, and nothing about that factor has resolved — it has only compounded.** Pool is now **-8.75%** from the $50 base, a new all-time low, beating this morning's -7.70% by over a full point in four hours with zero fired mechanical trigger and zero structural fact found by any of five desks across four dedicated WebSearches today (NVDA, OMCL, broad market, Treasury — all hit the same chronic same-day dateline wall). NVDA's buffer to the $180 contingency line deepened to **-24.6%**, a new deepest-ever reading, purely on price. The book's one real diversification gap — **no hedge against "AI/mega-cap tech sentiment,"** which drives NVDA directly and a meaningful slice of VTI's cap-weighted tech tilt (~16.4% of pool combined, more than double the headline NVDA number) — is the single factor doing almost all of today's damage, and it remains completely unaddressed four-plus hours after this desk first flagged it. GEHC, the book's only clean winner and its one proactive-trim candidate, sits essentially unchanged at **~1.0pp from BR's drift-trim trigger** — still not fired, still the closest live mechanical gate in the book.

---

## Portfolio snapshot (ground truth, this run)

`get_portfolio`: total_value **$95.63** = cash $56.10 + equity $39.53. Trading pool (= total − $50 off-limits reserve, per Jash's 2026-07-10 capital rule) = **$45.63**, a **-$4.37 / -8.75% accumulated loss** against the $50 base — a new all-time-low mark-to-market, deeper than this morning's -7.70% and every prior reading on file.

| Symbol | Qty | Avg Cost | Last Px | Mkt Value | % of Equity | % of Pool | Unrealized P&L |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $135.655 | $3.37 | 8.52% | 7.38% | **-32.6%** |
| VTI | 0.036690 | $370.40 | $345.109 | $12.66 | 32.04% | 27.76% | -6.8% |
| VXUS | 0.154525 | $84.13 | $75.955 | $11.74 | 29.69% | 25.73% | -9.7% |
| OMCL | 0.106405 | $46.99 | $32.77 | $3.49 | 8.82% | 7.64% | **-30.3%** |
| XLE | 0.086775 | $57.62 | $61.20 | $5.31 | 13.43% | 11.64% | +6.2% |
| GEHC | 0.036393 | $68.69 | $81.31 | $2.96 | 7.49% | 6.49% | **+18.4%** |
| Cash (deployable) | — | — | — | $6.10 | — | 13.37% | — |

Two of six holdings (NVDA, OMCL) are each down roughly a third, with zero stop-loss on either, and both set fresh unrealized-loss records this run. GEHC, the sole clean winner, is 2.49pp over BR's 4%-of-pool policy target and ~1.0pp from the 7.5%/+3.5pp drift-trim trigger — essentially unchanged from this morning, still the book's single most time-sensitive mechanical gate.

---

## Heat map summary

| Holding / Factor | % of Pool | Single-Name Risk | Correlation Risk | Rate Sensitivity | Recession Stress Est. | Liquidity | Policy Drift |
|---|---|---|---|---|---|---|---|
| **NVDA** | 7.38% | 🔴 Critical (new unrealized-loss record, -32.6%) | 🔴 Critical (AI/tech factor, duplicated inside VTI) | 🔴 High (long-duration growth DCF) | 🔴 High (-35% to -45% further) | 🟢 Low (tight spread) | 🟢 In-band |
| **VTI** | 27.76% | 🟢 Low (diversified) | 🟠 High (cap-weighted Big Tech tilt) | 🟡 Medium | 🟡 Medium (-25% to -30%) | 🟢 Low | 🟢 In-band |
| **VXUS** | 25.73% | 🟢 Low (diversified) | 🟡 Medium | 🟡 Medium | 🟡 Medium (-25% to -30%, +FX) | 🟢 Low | 🟢 In-band |
| **OMCL** | 7.64% | 🔴 High (-30.3%, 3rd-straight sub-floor close) | 🟢 Low (idiosyncratic) | 🟢 Low | 🟡 Medium (-15% to -20%) | 🟢 Low (spread tightened to ~0.55% today) | 🟢 In-band |
| **XLE** | 11.64% | 🟡 Medium | 🟢 Low (best diversifier, only green name besides GEHC most of today) | 🟢 Low | 🔴 High (wide range, demand-destruction risk) | 🟢 Low | 🟢 In-band |
| **GEHC** | 6.49% | 🟡 Medium-High (best performer, most overextended) | 🟢 Low | 🟢 Low | 🟢 Low (-15% to -20%) | 🟢 Low | 🔴 Critical (~1.0pp to trigger) |
| **Cash** | 13.37% | — | — | — | — | — | — |
| **Portfolio: AI/tech look-through** | ~16.4% | — | 🔴 Critical — **zero hedge, unchanged since this morning** | — | — | — | — |

---

## Correlation analysis between holdings

Unchanged from this morning's read, and more visibly true after today's session: **VTI is not an independent diversifier from NVDA** — both bled on the same AI/mega-cap-tech narrative today, not two separate data points. VXUS adds a genuinely distinct factor (non-US equities, unhedged FX) but still carries semis/tech exposure (TSMC, ASML) that partially correlates with the same narrative — and VXUS was in fact the single worst-performing core holding today (-9.7% unrealized, deepening). XLE remains this book's best true diversifier and was green for most of the session before fading slightly — energy continues to show low-to-negative correlation with the tech-led drawdown. OMCL and GEHC remain genuinely low-correlated to each other and to the tech sleeve — the one place the book's diversification claim still holds.

## Sector concentration

- **Technology/Semiconductors (direct):** 7.38% of pool (NVDA)
- **Technology look-through via VTI's Big Tech tilt:** ≈9.0pp additional → **~16.4% of pool in one correlated AI/tech factor**
- **Diversified core (VTI + VXUS):** 53.49% of pool
- **Healthcare (OMCL + GEHC, two distinct sub-sectors):** 14.13% of pool
- **Energy (XLE):** 11.64% of pool
- **Cash:** 13.37% of pool

No single GICS sector other than the tech look-through exceeds ~16% — the concentration problem remains one of *narrative*, not ticker, exactly as flagged this morning, and today's session is the sharpest live demonstration of it to date.

## Geographic exposure and currency risk

Unchanged in substance: roughly **74% of pool sits in US-domiciled securities**; only VXUS (25.73% of pool) provides genuine non-US exposure, and it is unhedged — today's -9.7% VXUS read shows the "unhedged dollar strength compounds rather than offsets a US-led drawdown" dynamic flagged this morning playing out in real time, not just in theory. No instrument in the book benefits from a dollar move or eases any geopolitical risk NVDA/XLE/GEHC carry via non-US revenue.

## Interest rate sensitivity

No change to the rate backdrop since this morning: the Fed held 3.75%–4.00% on October 28, and the team's working 10-year figure (5.12%, four-source-corroborated 11/16, re-confirmed by MS this run via FRED/MarketXLS/TradingEconomics) stands — a dedicated fresh WebSearch this run again could not locate a more current confirmed print, hitting the same chronic dateline wall every desk has hit for weeks. **NVDA's DCF remains the single most rate-sensitive position in the book.** MS's base-case flip to "undervalued" (+10.5%) this week is priced entirely off NVDA's own decline, not off any improvement in the rate backdrop or discount-rate input — treat that flip as a market-moved, not a model-improved, signal (consistent with this desk's and MS's own framing). XLE remains the lone partial, accidental natural hedge against the "higher for longer" drag on the rest of the book.

## Recession stress test (estimated further drawdown from current marks)

Unchanged methodology and figures from this morning's first full run of this exercise (Moody's/Zandi's ~40% 12-month recession-probability stress case; historical sector betas):

| Holding | Est. further drawdown in a confirmed recession | Rationale |
|---|---|---|
| NVDA | -35% to -45% | Highest-beta cyclical sleeve; an AI-capex pullback (actively discussed in financial press) hits Data Center revenue directly, atop the existing governance discount |
| VTI | -25% to -30% | Broad market; 2008/2020 bracket a plausible range |
| VXUS | -25% to -30% | Correlates with and can exceed US drawdowns globally; FX adds variance |
| OMCL | -15% to -20% | Defensive IT-spend profile, but a book-to-bill reversal or hospital-capex freeze is a real risk |
| XLE | -25% to -40% (widest range) | Demand destruction can be severe; partially offset by a standing geopolitical risk premium |
| GEHC | -15% to -20% | Sticky medtech/diagnostics capex, but China exposure is a wildcard |

Blended at today's pool weights, a confirmed-recession scenario still plausibly takes the pool to roughly **-30% to -38% cumulative loss from the $50 base** — unchanged in magnitude from this morning, but now measured against a lower starting point (today's -8.75% mark vs. this morning's -7.70%), meaning the dollar distance to that stress floor has shrunk further today on marks alone, with no change to the underlying probability.

## Liquidity risk by holding

All six holdings remain exchange-listed, fractional-share-eligible, with no practical execution-liquidity constraint at this book's size. NVDA, VTI, VXUS, XLE, GEHC all showed sub-0.3% bid/ask spreads this run. **OMCL's spread tightened materially to ~0.55% this run** (bid $32.61/ask $32.79), a genuine improvement from this morning's ~2.9% reading — worth noting precisely because it means today's deeper intraday bear-floor breach (-7.0%) is a real, liquid price, not a thin-tape artifact.

## Single stock risk and position sizing

Unchanged conclusion, now with fresh records: **NVDA (7.38% of pool, -32.6%, unresolved CEO-succession overhang, no stop-loss)** and **OMCL (7.64% of pool, -30.3%, third consecutive sub-floor close, no stop-loss)** both set new worst-ever unrealized-loss marks this run. The trader's discipline is correctly refusing to trim on price alone — no structural break exists on either name — but that also means there remains **no mechanical check against either position continuing to bleed**, a gap this desk has now named without resolution across multiple reports. **GEHC (6.49% of pool vs. a 4% policy target)** remains the book's sizing irony: its only clean winner is also its most overextended position relative to policy, and sits at the closest-ever reading to its own trim trigger.

## Tail risk scenarios

| Scenario | Rough probability | Severity if it hits |
|---|---|---|
| NVDA governance story worsens materially (confirmed national-security finding, further C-suite departures) | Low-moderate (~10-15%) | Extreme — this name has shown -8% to -13% single-session moves on headlines alone, zero hedge |
| OMCL's bear floor gets formally lowered *and* a genuine structural deterioration is later found (not just a price level) | Moderate (~20-25%) | High — no stop-loss exists; MS's own fresh Q3-print pull this week found the cash-flow story *improved*, so the nearer-term risk is the floor getting lifted under pressure, not abandoned on real cause — but the asymmetry (no mechanical check if that pressure wins) remains live |
| Correlated broad risk-off / "AI capex pullback" narrative keeps hitting NVDA + VTI + VXUS simultaneously | Moderate-high, and **actively realizing today** — this is not a forward-looking scenario anymore, it is today's session | High — this is precisely the uncredited ~16.4%-of-pool correlated exposure named this morning and again here, with no offsetting instrument anywhere in the account, now compounding for a second straight four-hour stretch |
| GEHC's drift-trim trigger fires into a broad risk-off tape, forcing the book to de-risk its only winner at a bad moment | Elevated (~1.0pp buffer, essentially flat all day) | Low-moderate — mechanically manageable, but this book's only enforced trim discipline still applies to its best, not its worst, position |

## Hedging strategies (equities-only toolbox — no options available)

Unchanged from this morning — the gap remains open, not addressed:

1. **AI/tech correlated concentration (biggest risk, and today's actual loss driver):** do not add to NVDA or VTI with any future deployable cash (consistent with rule 6a's pause/rule 20's no-new-cash instruction); if a GEHC trim frees cash, route it to XLE or the cash buffer, never back into VTI/VXUS.
2. **OMCL single-name risk with no stop-loss:** either (a) add a small broad healthcare-sector ETF (e.g., XLV) alongside OMCL to spread company-specific risk while keeping sector exposure, or (b) formalize an explicit hard price-based stop-loss for OMCL — the one instrument missing from this book's otherwise well-designed structural-break framework.
3. **Zero portfolio-level recession/risk-off hedge:** the book still has no defensive/low-beta sleeve — XLE is cyclical-volatile, not defensive. A small allocation to a genuinely low-beta sector (utilities, staples), funded from a future VTI/VXUS over-target trim or the next GEHC trim proceeds, would lower blended portfolio beta ahead of a recession scenario multiple forecasters place at 15-40%.

**Four-hour-old flag, still unaddressed:** this desk named all three of the above this morning. Today's deeper all-time-low print is the direct, measurable cost of leaving them open — not a new risk, but a live demonstration that "no structural break" and "no portfolio damage" are not the same thing.

## Rebalancing suggestions

| Position | Current (% of pool) | Suggested | Rationale |
|---|---|---|---|
| NVDA | 7.38% | Hold; no add (standing pause) | Already blocked from new cash; a trim is the available tool if a fresh structural break fires |
| VTI | 27.76% | Hold | In-band vs. policy; still the correlated-tech look-through source, don't add |
| VXUS | 25.73% | Hold | In-band; the book's only real geographic diversifier, though today shows it isn't a hedge against a US-led tech drawdown |
| OMCL | 7.64% | Hold; no add | At policy; add a stop-loss or sector-diversifying ETF per hedging note above |
| XLE | 11.64% | Hold, or preferred add target if cash ever deploys | Best current diversifier; held up better than every other holding for most of today |
| GEHC | 6.49% (vs. 4% target) | **Trim ~2.5pp toward target proactively**, rather than waiting for the mechanical line | ~1.0pp from firing anyway; locking in gains on the book's one clean winner ahead of further stress, rather than exactly at the trigger, remains the more risk-disciplined sequencing — BR has a pre-committed firing action on file but this desk's proactive-now version was not adopted as of this morning's report |
| Cash | 13.37% | Let float higher; do not rush to redeploy | Tail-risk backdrop argues for dry powder over full deployment while zero hedges exist |

---

*Radical transparency note: this desk is not recommending panic-selling anything — NVDA and OMCL's own contingency plans remain correctly structural-break-gated, and nothing in this report fires either. But four hours ago this desk said "no structural break yet is not the same as no risk," and the book has since gone on to set a fresh all-time-low mark-to-market on exactly the uncredited correlated factor this desk named. A risk report that gets validated by the next four hours of price action and still produces zero change to the book's hedging posture is not a success story — it is the same open gap, now with more evidence behind it. This stays a D, not because anything new broke, but because nothing that was already broken got fixed.*
